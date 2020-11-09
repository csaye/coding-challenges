fizzBuzz :: Integer -> Integer -> IO ()
fizzBuzz i 0 = return ()
fizzBuzz i n =
    do
        if i `mod` 3 == 0 && i `mod` 5 == 0 then putStrLn "FizzBuzz"
        else if i `mod` 3 == 0 then putStrLn "Fizz"
        else if i `mod` 5 == 0 then putStrLn "Buzz"
        else print i
        fizzBuzz (i + 1) (n - 1)

main =
    do
        fizzBuzz 1 100
