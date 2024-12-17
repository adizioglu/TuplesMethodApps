
namespace ConsoleAppCs
{
    public static class Methods
    {

        // Tuple
        public static (string firstName, string lastName) GetFullName()
        {
            Console.Write("What is your first name: ");
            string firstName = Console.ReadLine();

            Console.Write("What is your last name: ");
            string lastName = Console.ReadLine();

            return (firstName, lastName);
        }

    }
}
