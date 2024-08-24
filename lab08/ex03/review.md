1.

```
catch
{
    quotient = divide(num1, num2);
    cout << "The quotient is " << quotient << endl;
}
try(string exceptionString)
{
    cout << exceptionString;
}
```

The try and catch are misplaced.

2.

```
try
{
    quotient = divide(num1, num2);
}
cout << "The quotient is " << quotient << endl;
catch (string exceptionString)
{
    cout << exceptionString;
}
```

The cout statement should not appar between the try and catch blocks.

3.

```
template <class T>
T square(T number)
{
    return T * T;
}
```

The return statement cannot be Type \* Type.

4.

```
template <class T>
int square(int number)
{
    return number * number;
}
```

The type parameter T is not used

5.

```
template <class T1, class T2>
T1 sum(T1 x, T1 y)
{
    return x + y;
}
```

The type parameter T2 is not used
