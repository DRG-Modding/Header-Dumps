#ifndef UE4SS_SDK_OVERLAY_MissionFailed_HPP
#define UE4SS_SDK_OVERLAY_MissionFailed_HPP

class UOVERLAY_MissionFailed_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Enter;
    class UImage* backplate;
    class UImage* BGgradient;
    class UImage* frontplate_center;
    class UImage* frontplate_left;
    class UImage* frontplate_left_overlay;
    class UImage* frontplate_right;
    class UImage* frontplate_right_overlay;
    class UImage* frontstrip;
    class UImage* gradientRadial;

    void Construct();
    void ExecuteUbergraph_OVERLAY_MissionFailed(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
