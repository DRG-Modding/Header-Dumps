#ifndef UE4SS_SDK_RadarPointInterface_HPP
#define UE4SS_SDK_RadarPointInterface_HPP

class URadarPointInterface_C : UInterface
{

    void UpdatePoint(float alpha, float verticalDist, bool& destroy);
    void Get3dPosition(FVector& Pos);
    void InitPoint(URadarPointComponent* RadarComponent, bool& success);
}

#endif
