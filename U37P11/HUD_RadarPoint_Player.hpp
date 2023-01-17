#ifndef UE4SS_SDK_HUD_RadarPoint_Player_HPP
#define UE4SS_SDK_HUD_RadarPoint_Player_HPP

class UHUD_RadarPoint_Player_C : public UUserWidget
{
    class UImage* Image_0;
    class APlayerCharacter* Player;
    bool MarkedForDestruction;

    void InitPoint(class URadarPointComponent* RadarComponent, bool& success);
    void Get3dPosition(FVector& Pos);
    void UpdatePoint(float alpha, float verticalDist, bool& destroy);
    void Deactivate();
};

#endif
