#include "plugin.hpp"

rack::Plugin* pPluginInstance;

void init(rack::Plugin* pPlugin)
{
    pPluginInstance = pPlugin;

    pPlugin->addModel(pModelCode);
}