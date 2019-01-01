#include <spice/app.hpp>

namespace spice {

void Application::title()
{
    const char * const titleText = "SpiceWallet";
    const int len = ::strlen(titleText);

    titleWindow->bkgd(screen_titles());
    titleWindow->addstr(0, (titleWindow->cols() - len)/2, titleText);
    titleWindow->noutrefresh();
}
int Application::run()
{
    // TODO: Insert here no wallet logic
    StartupMenu M(wallet);
    M();

    AddressesPanel W(wallet);
    W();

    return 0;
}

} // namespace spice