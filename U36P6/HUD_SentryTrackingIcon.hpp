#ifndef UE4SS_SDK_HUD_SentryTrackingIcon_HPP
#define UE4SS_SDK_HUD_SentryTrackingIcon_HPP

class UHUD_SentryTrackingIcon_C : public UActorTrackingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Shots Fired;
    class UProgressBar* AmmoProgress;
    class UImage* Arrow;
    class UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall;
    class UImage* DataImage;
    class UHUD_DefaultLabel_C* Distance;
    class UHUD_DefaultLabel_C* Name;
    class UHUD_DefaultLabel_C* StateLabel;
    float ArrowRotation;
    float ArrowRadius;
    float ArrowAngle;
    class ARecallableSentryGun* RecallableActor;
    class ARedeployableSentryGun* SentryGun;
    class ARecallableSentryGunItem* Item;

    void SetInfo(FText InText, class UTexture2D* Texture);
    void PreConstruct(bool IsDesignTime);
    void UpdateArrow(bool inView, float Angle);
    void OnShow();
    void Construct();
    void OnItemEquipped(class AItem* Item);
    void Update State();
    void OnSentryIndexChanged(int32 Index);
    void OnInViewChanged(bool inView, float Angle);
    void OnAmmoCountChanged(int32 AmmoCount, int32 Change);
    void OnTargetSet(class AActor* NewTarget);
    void OnSelectedItemChanged_Event(class ARecallableSentryGun* SentryGun);
    void OnDeployProgress_Event(float Progress);
    void OnSentryGunStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void OnTargetDistanceChanged(float Distance);
    void OnRecallableStateChanged(class ARecallableActor* Sender, ERecallableActorState State);
    void ExecuteUbergraph_HUD_SentryTrackingIcon(int32 EntryPoint);
};

#endif
