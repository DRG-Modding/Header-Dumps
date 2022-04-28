#ifndef UE4SS_SDK_RadarPointInterface_HPP
#define UE4SS_SDK_RadarPointInterface_HPP

class IRadarPointInterface_C : public IInterface
{

    void UpdatePoint(float alpha, float verticalDist, bool& destroy);
    void Get3dPosition(FVector& Pos);
    void InitPoint(class URadarPointComponent* RadarComponent, bool& success);
};

#endif
