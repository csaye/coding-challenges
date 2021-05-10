fibonacci :: Integer -> Integer -> Integer -> IO ()
fibonacci a b 0 = return ()
fibonacci a b n =
    do
        print (a + b)
        fibonacci b (a + b) (n - 1)

main =
    do
        fibonacci -1 1 10
