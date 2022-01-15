#ifndef UE4SS_SDK_OVERLAY_MissionFailed_HPP
#define UE4SS_SDK_OVERLAY_MissionFailed_HPP

class UOVERLAY_MissionFailed_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Enter;
    UImage* backplate;
    UImage* BGgradient;
    UImage* frontplate_center;
    UImage* frontplate_left;
    UImage* frontplate_left_overlay;
    UImage* frontplate_right;
    UImage* frontplate_right_overlay;
    UImage* frontstrip;
    UImage* gradientRadial;

    void Construct();
    void ExecuteUbergraph_OVERLAY_MissionFailed(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
