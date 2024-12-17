Public Class Methods

    ' Tuple
    Public Shared Function GetFullName() As (String, String)
        Console.Write("What is your first name: ")
        Dim firstName As String = Console.ReadLine()

        Console.Write("What is your last name: ")
        Dim lastName As String = Console.ReadLine()

        Return (firstName, lastName)
    End Function

End Class
