#ifndef UE4SS_SDK_HUD_EnemyTargeting_AfflictionBox_HPP
#define UE4SS_SDK_HUD_EnemyTargeting_AfflictionBox_HPP

class UHUD_EnemyTargeting_AfflictionBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AfflictionBox;
    float Size;
    class UPawnAfflictionComponent* AfflictionComponent;
    TMap<class UPawnAffliction*, class UHUD_EnemyTargeting_Affliction_C*> AfflictionWidgets;
    TArray<TSoftObjectPtr<UPawnAffliction>> PreviewAfflictions;
    TArray<class UPawnAffliction*> IgnoreAfflictions;

    void SetAfflictionComponent(class UPawnAfflictionComponent* InAfflictionComponent);
    void ToggleIgnoreAfflictions(TArray<class UPawnAffliction*>& Affliction, bool ShouldIgnore);
    void ToggleIgnoreAffliction(class UPawnAffliction* Affliction, bool ShouldIgnore);
    void ClearAfflictions();
    void ToggleAffliction(class UPawnAffliction* InAffliction, bool InVisible);
    void SetTarget(class AActor* InAfflictionTarget);
    void OnAfflictionActivatedEvent_Event(class UPawnAffliction* Affliction);
    void OnAfflictionDeactivatedEvent_Event(class UPawnAffliction* Affliction);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox(int32 EntryPoint);
};

#endif
