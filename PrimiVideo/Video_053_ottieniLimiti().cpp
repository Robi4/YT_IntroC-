void ottieniLimiti()
{
    std::cout << std::setw( 30 ) << std::left << "        Tipo"
              << std::setw( 20 ) << std::left << "        Limite"
              << std::setw( 10 ) << std::right << "log2() " << '\n'
              << std::setw( 30 ) << std::left << "      --------"
              << std::setw( 20 ) << std::left << "      ----------"
              << std::setw( 10 ) << std::right << "--------";

    double logmax { std::log2( std::numeric_limits<int>::max() ) };
    std::cout << std::setw( 30 ) << std::left << "\nint::max()"
              << std::setw( 20 ) << std::right << std::numeric_limits<int>::max()
              << std::setw( 10 ) << std::right << logmax
              << std::setw( 30 ) << std::left << "\nint::min()"
              << std::setw( 20 ) << std::right << std::numeric_limits<int>::min()
              << std::setw( 30 ) << std::left << "\nint::lowest()"
              << std::setw( 20 ) << std::right << std::numeric_limits<int>::lowest()
              << '\n';

    logmax = std::log2( std::numeric_limits<unsigned>::max() );
    std::cout << std::setw( 30 ) << std::left << "\nunsigned::max()"
              << std::setw( 20 ) << std::right << std::numeric_limits<unsigned>::max()
              << std::setw( 10 ) << std::right << logmax
              << std::setw( 30 ) << std::left << "\nunsigned::min()"
              << std::setw( 20 ) << std::right << std::numeric_limits<unsigned>::min()
              << std::setw( 30 ) << std::left << "\nunsigned::lowest()"
              << std::setw( 20 ) << std::right << std::numeric_limits<unsigned>::lowest()
              << '\n';

    logmax = std::log2( std::numeric_limits<double>::max() );
    double logmin { std::log2( std::numeric_limits<double>::min() ) };
    std::cout << std::setw( 30 ) << std::left << "\ndouble::max()"
              << std::setw( 20 ) << std::right << std::numeric_limits<double>::max()
              << std::setw( 10 ) << std::right << logmax
              << std::setw( 30 ) << std::left << "\ndouble::min()"
              << std::setw( 20 ) << std::right << std::numeric_limits<double>::min()
              << std::setw( 10 ) << std::right << logmin
              << std::setw( 30 ) << std::left << "\ndouble::lowest()"
              << std::setw( 20 ) << std::right << std::numeric_limits<double>::lowest()
              << '\n';

    logmax = std::log2( std::numeric_limits<std::streamsize>::max() );
    std::cout << std::setw( 30 ) << std::left << "\nstd::streamsize::max()"
              << std::setw( 20 ) << std::right << std::numeric_limits<std::streamsize>::max()
              << std::setw( 10 ) << std::right << logmax
              << std::setw( 30 ) << std::left << "\nstd::streamsize::min()"
              << std::setw( 20 ) << std::right << std::numeric_limits<std::streamsize>::min()
              << std::setw( 30 ) << std::left << "\nstd::streamsize::lowest()"
              << std::setw( 20 ) << std::right << std::numeric_limits<std::streamsize>::lowest()
              << '\n';

    logmax = std::log2( std::numeric_limits<char>::max() );
    std::cout << std::setw( 30 ) << std::left << "\nchar::max()"
              << std::setw( 20 ) << std::right
              << static_cast<int>(std::numeric_limits<char>::max())
              << std::setw( 10 ) << std::right << logmax
              << std::setw( 30 ) << std::left << "\nchar::min()"
              << std::setw( 20 ) << std::right
              << static_cast<int>(std::numeric_limits<char>::min())
              << std::setw( 30 ) << std::left << "\nchar::lowest()"
              << std::setw( 20 ) << std::right
              << static_cast<int>(std::numeric_limits<char>::lowest())
              << '\n';

    logmax = std::log2( std::string().max_size() );
    std::cout << std::setw( 30 ) << std::left << "\nMax chars in std::string"
              << std::setw( 20 ) << std::right << std::string().max_size()
              << std::setw( 10 ) << std::right << logmax
              << '\n';

    logmax = std::log2( std::vector<int>().max_size() );
    std::cout << std::setw( 30 ) << std::left << "\nMax elements in std::vector"
              << std::setw( 20 ) << std::right << std::vector<int>().max_size()
              << std::setw( 10 ) << std::right << logmax
              << '\n'
              << '\n';
}
