#ifndef UE4SS_SDK_HUD_LaserPointerTrackingIcon_HPP
#define UE4SS_SDK_HUD_LaserPointerTrackingIcon_HPP

class UHUD_LaserPointerTrackingIcon_C : public UActorTrackingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* AnimIcon;
    class UImage* Arrow;
    class UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall;
    class UTextBlock* DistanceLabel;
    class UBasic_Image_C* IconImage;
    class UTextBlock* NameLabel;
    class UTextBlock* PlayerName;
    class UCanvasPanel* RootCanvas;
    float ArrowRotation;
    float ArrowRadius;
    float ArrowAngle;
    class ALaserPointerMarker* Marker;
    bool IsCanvasVisible;
    float TimeNotLookingAt;

    void SetIconColor(FLinearColor InColor);
    void UpdateVisibility();
    void UpdatePixelOffset();
    void OnInViewChanged(bool inView, float Angle);
    void PreConstruct(bool IsDesignTime);
    void UpdateArrow(bool inView, float Angle);
    void OnShow();
    void OnTargetDistanceChanged(float Distance);
    void OnTargetSet(class AActor* NewTarget);
    void ExecuteUbergraph_HUD_LaserPointerTrackingIcon(int32 EntryPoint);
};

#endif
