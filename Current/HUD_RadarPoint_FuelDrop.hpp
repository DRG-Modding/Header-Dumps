#ifndef UE4SS_SDK_HUD_RadarPoint_FuelDrop_HPP
#define UE4SS_SDK_HUD_RadarPoint_FuelDrop_HPP

class UHUD_RadarPoint_FuelDrop_C : public UUserWidget
{
    class UImage* Image_0;
    class URadarPointComponent* Component;
    float TimeoutDelay;
    float Timeout;

    void InitPoint(class URadarPointComponent* RadarComponent, bool& success);
    void Get3dPosition(FVector& Pos);
    void UpdatePoint(float alpha, float verticalDist, bool& destroy);
};

#endif
