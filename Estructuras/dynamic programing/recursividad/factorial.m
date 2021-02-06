function[ ] = factorial(n)
if (n == 0)
    n = 1;
else
    n = n * factorial( n - 1);
end
    
