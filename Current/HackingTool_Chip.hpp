#ifndef UE4SS_SDK_HackingTool_Chip_HPP
#define UE4SS_SDK_HackingTool_Chip_HPP

class UHackingTool_Chip_C : public UHackingToolWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimEnableInterface;
    class UWidgetAnimation* AnimHackingCompleted;
    class UWidgetAnimation* AnimChipChallenge;
    class UWidgetAnimation* AnimZoomInFinal;
    class UWidgetAnimation* AnimBarVerticalFinish;
    class UWidgetAnimation* AnimDotMovementFinish;
    class UWidgetAnimation* AnimBarHorizontalFinish;
    class UWidgetAnimation* AnimDotMovement;
    class UWidgetAnimation* AnimCircleIntro;
    class UWidgetAnimation* AnimStartHacking;
    class UWidgetAnimation* AnimShake;
    class UWidgetAnimation* AnimBarVertical;
    class UWidgetAnimation* AnimBarHorizontal;
    class UUI_ImageTinted_C* Chip_Challenge;
    class UUI_ImageTinted_C* Chip_Dot;
    class UUI_ImageTinted_C* Chip_Filled;
    class UUI_ImageTinted_C* Chip_Outline;
    class UUI_CircularProgressBar_C* Circle;
    class UCanvasPanel* Circle_Canvas;
    class UCanvasPanel* Content_Canvas;
    class UCanvasPanel* Dot_Canvas;
    class UUI_ImageTinted_C* Dot_Image;
    class UCanvasPanel* Grid_Canvas;
    class UBasic_Image_C* Grid_Image;
    class UHorizontalBox* HorizontalBar_Canvas;
    class UUI_ImageTinted_C* HorizontalBar_Solid;
    class UUI_ImageTinted_C* HorizontalBar_Tail;
    class UUI_HackingTool_Button_C* Interface_Button;
    class UUI_HackingTool_Header_C* Interface_Header;
    class UUI_HackingTool_Progress_C* Interface_Progress;
    class UVerticalBox* VerticalBar_Canvas;
    class UUI_ImageTinted_C* VerticalBar_Solid;
    class UUI_ImageTinted_C* VerticalBar_Tail;
    float CameraZoom;
    FVector2D CameraPosition;
    float ChipAngle;
    float ChipDistance;
    float DotAngle;
    float HorizontalTailSize;
    float VerticalTailSize;
    float FinalPanAndZoom;
    float ColoredGridProgress;
    FText DefaultSubtitle;
    class UAudioComponent* IdleAudioComponent;

    void UpdateIdleAudio();
    void PlayAudioOnDevice(class USoundCue* InCue);
    void SetColoredGridProgress(float InValue);
    void SetFinalPanAndZoom(float InFinalPanAndZoom);
    void SetVerticalTailSize(float TailSize);
    void SetHorizontalTailSize(float TailSize);
    void HandleClick();
    void SetDotAngle(float InAngle);
    void SetChipPosition(float InAngle, float InDistance);
    void SetCameraPosition(FVector2D CameraCenter);
    void SetCameraZoom(float CameraZoom);
    void Finished_303E4D8F4F741AD74469EFA5A7CF42D2();
    void Finished_303E4D8F4F741AD74469EFA5C87DAB7C();
    void Finished_303E4D8F4F741AD74469EFA545CF1518();
    void Finished_303E4D8F4F741AD74469EFA5510DEF98();
    void Finished_FEA6E2554BD3BA37B77DD19EFD54A9D5();
    void Finished_FEA6E2554BD3BA37B77DD19E54F70ED6();
    void Finished_FEA6E2554BD3BA37B77DD19EC8B73F22();
    void Finished_FEA6E2554BD3BA37B77DD19E3D6D1F79();
    void Finished_303E4D8F4F741AD74469EFA558B75970();
    void Finished_99C3EF4B470401D640445F9E66532434();
    void Finished_303E4D8F4F741AD74469EFA59D1AD57C();
    void Finished_303E4D8F4F741AD74469EFA5F9ACB30F();
    void PreConstruct(bool IsDesignTime);
    void Shake(class UWidgetAnimation* InContinueAnimation, int32 NumLoopsToPlay, float PlaybackSpeed);
    void ReceiveHackingStarted();
    void BndEvt__Interface_Progress_K2Node_ComponentBoundEvent_0_OnNextStage__DelegateSignature(int32 InNewStage, int32 InTotalStages);
    void ReceiveHackingToolUnequipped();
    void ReceiveActionClick();
    void ExecuteUbergraph_HackingTool_Chip(int32 EntryPoint);
};

#endif
