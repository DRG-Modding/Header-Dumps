#ifndef UE4SS_SDK_HUD_CharacterTrackingIcon_HPP
#define UE4SS_SDK_HUD_CharacterTrackingIcon_HPP

class UHUD_CharacterTrackingIcon_C : public UActorTrackingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimPlayerDown;
    class UWidgetAnimation* AnimInView;
    class UImage* Arrow;
    class UBorder* BorderInfo;
    class USizeBox* BoxSizer;
    class UHUD_DefaultLabel_C* Distance;
    class UImage* IconClass;
    class UImage* IconDown;
    class UTextBlock* PlayerName;
    class UCanvasPanel* RootCanvas;
    float ArrowRotation;
    float ArrowRadius;
    float ArrowAngle;
    class APlayerCharacter* targetCharacter;
    bool IconInView;
    bool PlayerDown;

    void PreConstruct(bool IsDesignTime);
    void UpdateArrow(bool inView, float Angle);
    void OnShow();
    void OnInViewChanged(bool inView, float Angle);
    void OnTargetSet(class AActor* NewTarget);
    void OnTargetDistanceChanged(float Distance);
    void OnUpdateName(FString NewName);
    void OnCharacterChanged(class APlayerCharacter* PlayerCharacter);
    void OnCharacterStateChanged(ECharacterState NewState);
    void Construct();
    void UpdateClassIcon();
    void ExecuteUbergraph_HUD_CharacterTrackingIcon(int32 EntryPoint);
};

#endif
