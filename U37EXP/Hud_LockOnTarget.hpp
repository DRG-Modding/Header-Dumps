#ifndef UE4SS_SDK_Hud_LockOnTarget_HPP
#define UE4SS_SDK_Hud_LockOnTarget_HPP

class UHud_LockOnTarget_C : public ULockOnTrackingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SavedAmmoOutro;
    class UWidgetAnimation* TargetLocked;
    class UImage* Arrow;
    class UImage* CrossHair_Base;
    class UImage* CrossHair_Glow;
    class UImage* CrossHair_Glow_1;
    class USizeBox* CrosshairSize;
    class UTextBlock* Text_LockOnCount;
    class UVerticalBox* VerticalBox_Crosshair;
    float ArrowRadius;
    float ArrowRotation;
    float ArrowAngle;

    void OnTargetDistanceChanged(float Distance);
    void OnInViewChanged(bool inView, float Angle);
    void PreConstruct(bool IsDesignTime);
    void UpdateArrow(bool inView, float Angle);
    void OnLockOn(int32 numberOfLockOnsOnThisTarget, int32 totalNumberOfLockOns);
    void OnFireComplete(int32 numberOfLockOnsOnThisTarget);
    void UpdateCount(int32 NewCount);
    void OnShow();
    void CleanUpWidget(bool showFade);
    void Construct();
    void OutroFinished();
    void ExecuteUbergraph_Hud_LockOnTarget(int32 EntryPoint);
};

#endif
