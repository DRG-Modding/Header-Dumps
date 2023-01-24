#ifndef UE4SS_SDK_HUD_ExtractorTrackingIcon_HPP
#define UE4SS_SDK_HUD_ExtractorTrackingIcon_HPP

class UHUD_ExtractorTrackingIcon_C : public UActorTrackingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Shots Fired;
    class UProgressBar* AmmoProgress;
    class UImage* Arrow;
    class UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall;
    class UImage* DataImage;
    class UHUD_DefaultLabel_C* Distance;
    float ArrowRotation;
    float ArrowRadius;
    float ArrowAngle;
    float MaxCapacity;

    void SetInfo(FText InText, class UTexture2D* Texture);
    void PreConstruct(bool IsDesignTime);
    void UpdateArrow(bool inView, float Angle);
    void OnShow();
    void OnInViewChanged(bool inView, float Angle);
    void OnTargetSet(class AActor* NewTarget);
    void OnTargetDistanceChanged(float Distance);
    void OnCurrentLoadChangedEvent(float FloatValue);
    void LoadChanged(float CurrentLoad);
    void ExecuteUbergraph_HUD_ExtractorTrackingIcon(int32 EntryPoint);
};

#endif
