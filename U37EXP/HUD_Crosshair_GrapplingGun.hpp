#ifndef UE4SS_SDK_HUD_Crosshair_GrapplingGun_HPP
#define UE4SS_SDK_HUD_Crosshair_GrapplingGun_HPP

class UHUD_Crosshair_GrapplingGun_C : public UUserWidget
{
    class UHUD_AngleIndicator_C* HUD_AngleIndicator_151;
    class UHUD_CrossHair_Basic02_C* HUD_Crosshair_Basic02;
    class UTextBlock* TextBlock_177;

    void ClearMessage();
    void DistanceMessage(float Dist);
    void FailMessage(FText Msg);
    void SetText(FText Value, FLinearColor Color);
};

#endif
