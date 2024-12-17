
Module Program
    Sub Main(args As String())

        Dim fullName = Methods.GetFullName()

        Console.WriteLine($"First Name: {fullName.Item1} Last Name: {fullName.Item2}")

    End Sub
End Module
