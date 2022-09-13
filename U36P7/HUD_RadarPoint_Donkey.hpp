#ifndef UE4SS_SDK_HUD_RadarPoint_Donkey_HPP
#define UE4SS_SDK_HUD_RadarPoint_Donkey_HPP

class UHUD_RadarPoint_Donkey_C : public UUserWidget
{
    class UImage* MarkerImage;
    class URadarPointComponent* Component;
    float TimeoutDelay;
    float Timeout;

    void InitPoint(class URadarPointComponent* RadarComponent, bool& success);
    void Get3dPosition(FVector& Pos);
    void UpdatePoint(float alpha, float verticalDist, bool& destroy);
};

#endif
