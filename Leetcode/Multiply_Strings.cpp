if (num1 == "0" || num2 == "0") return "0";

        int n = num1.size();
        int m = num2.size();
        vector<int> result(n + m, 0);

        // Reverse both numbers for easier calculation
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        // Multiply digit by digit
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                result[i + j] += mul;

                // Handle carry
                result[i + j + 1] += result[i + j] / 10;
                result[i + j] %= 10;
            }
        }

        // Convert vector to string
        string ans = "";
        int i = result.size() - 1;

        // Remove leading zeros
        while (i >= 0 && result[i] == 0) i--;

        while (i >= 0) ans += (result[i--] + '0');

        return ans;