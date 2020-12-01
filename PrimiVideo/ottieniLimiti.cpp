void ottieniLimiti()
{
    std::cout << std::setw( 30 ) << std::left << "\tTipo"
              << std::setw( 20 ) << std::left << "\tValore"
              << std::setw( 30 ) << std::left << "\n\t----"
              << std::setw( 20 ) << std::left << "\t------";

    std::cout << std::setw( 30 ) << std::left << "\nint::max()"
              << std::setw( 20 ) << std::right << std::numeric_limits<int>::max()
              << std::setw( 30 ) << std::left << "\nint::min()"
              << std::setw( 20 ) << std::right << std::numeric_limits<int>::min()
              << std::setw( 30 ) << std::left << "\nint::lowest()"
              << std::setw( 20 ) << std::right << std::numeric_limits<int>::lowest()
              << '\n';

    std::cout << std::setw( 30 ) << std::left << "\ndouble::max()"
              << std::setw( 20 ) << std::right << std::numeric_limits<double>::max()
              << std::setw( 30 ) << std::left << "\ndouble::min()"
              << std::setw( 20 ) << std::right << std::numeric_limits<double>::min()
              << std::setw( 30 ) << std::left << "\ndouble::lowest()"
              << std::setw( 20 ) << std::right << std::numeric_limits<double>::lowest()
              << '\n';

    std::cout << std::setw( 30 ) << std::left << "\nstd::streamsize::max()"
              << std::setw( 20 ) << std::right << std::numeric_limits<std::streamsize>::max()
              << std::setw( 30 ) << std::left << "\nstd::streamsize::min()"
              << std::setw( 20 ) << std::right << std::numeric_limits<std::streamsize>::min()
              << std::setw( 30 ) << std::left << "\nstd::streamsize::lowest()"
              << std::setw( 20 ) << std::right << std::numeric_limits<std::streamsize>::lowest()
              << '\n';

    std::cout << std::setw( 30 ) << std::left << "\nchar::max()"
              << std::setw( 20 ) << std::right
              << static_cast<int>(std::numeric_limits<char>::max())
              << std::setw( 30 ) << std::left << "\nchar::min()"
              << std::setw( 20 ) << std::right
              << static_cast<int>(std::numeric_limits<char>::min())
              << std::setw( 30 ) << std::left << "\nchar::lowest()"
              << std::setw( 20 ) << std::right
              << static_cast<int>(std::numeric_limits<char>::lowest())
              << '\n';

    std::cout << std::setw( 30 ) << std::left << "\nMax chars in std::string"
              << std::setw( 20 ) << std::right << std::string().max_size()
              << '\n';

    std::cout << std::setw( 30 ) << std::left << "\nMax elements in std::vector"
              << std::setw( 20 ) << std::right << std::vector<int>().max_size()
              << '\n';
}
