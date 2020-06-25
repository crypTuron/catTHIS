#include <amount.h>
#include <util.h>

CAmount CollateralRequired()
{
    const CAmount nCollateralRequired = 10000 * COIN;
    return nCollateralRequired;
}