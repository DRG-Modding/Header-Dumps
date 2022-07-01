#ifndef UE4SS_SDK_HUD_CroNew_GrapplingGun_HPP
#define UE4SS_SDK_HUD_CroNew_GrapplingGun_HPP

class UHUD_CroNew_GrapplingGun_C : public UUserWidget
{
    class UWidgetAnimation* AnimFail;
    class UImage* Image_InnerCircle;
    class UTextBlock* Text_Distance;
    class UTextBlock* Text_FailMessage;
    FTimerHandle FailTimer;

    void Recharging(float Progress);
    void ClearMessages();
    void DistanceMessage(float Dist, bool TooFar);
    void FailMessage(FText& Msg);
};

#endif
