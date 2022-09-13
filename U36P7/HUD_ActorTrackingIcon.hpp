#ifndef UE4SS_SDK_HUD_ActorTrackingIcon_HPP
#define UE4SS_SDK_HUD_ActorTrackingIcon_HPP

class UHUD_ActorTrackingIcon_C : public UActorTrackingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Arrow;
    class UImage* DataImage;
    class UHUD_DefaultLabel_C* Distance;
    class UHUD_DefaultLabel_C* Name;
    float ArrowRotation;
    float ArrowRadius;
    float ArrowAngle;

    void SetInfo(FText InText, class UTexture2D* Texture, FLinearColor InTint);
    void OnTargetDistanceChanged(float Distance);
    void OnTargetSet(class AActor* NewTarget);
    void OnPlayerNameChanged(FString NewName);
    void OnInViewChanged(bool inView, float Angle);
    void PreConstruct(bool IsDesignTime);
    void UpdateArrow(bool inView, float Angle);
    void OnShow();
    void ExecuteUbergraph_HUD_ActorTrackingIcon(int32 EntryPoint);
};

#endif
