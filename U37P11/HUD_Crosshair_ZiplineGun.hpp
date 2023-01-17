#ifndef UE4SS_SDK_HUD_Crosshair_ZiplineGun_HPP
#define UE4SS_SDK_HUD_Crosshair_ZiplineGun_HPP

class UHUD_Crosshair_ZiplineGun_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BottomArrow;
    class UImage* Dot;
    class UHUD_AngleIndicator_C* HUD_AngleIndicator_151;
    class UHUD_CrossHair_Basic02_C* HUD_Crosshair_Basic02;
    class UTextBlock* InfoLabel;
    class UImage* LineL;
    class UImage* LineR;
    class UImage* TopArrow;
    FLinearColor FailColor;
    FLinearColor BaseColor;

    void SetMinMaxAngle(float Min, float Max);
    void ClearMessage();
    void DistanceMessage(float Dist, bool InRange);
    void FailMessage(FText Msg);
    void SetText(FText Value);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Crosshair_ZiplineGun(int32 EntryPoint);
};

#endif
