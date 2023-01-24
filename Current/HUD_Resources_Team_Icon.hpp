#ifndef UE4SS_SDK_HUD_Resources_Team_Icon_HPP
#define UE4SS_SDK_HUD_Resources_Team_Icon_HPP

class UHUD_Resources_Team_Icon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* PingAmount;
    class UWidgetSwitcher* AmountSwitcher;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UInvalidationBox* Invalidation;
    class UHUD_DefaultLabel_C* ResourceAmount;
    class UImage* ResourceCompleted;
    class UHUD_DefaultLabel_C* ResourceName;
    class UCappedResource* Resource;
    float Amount;
    bool HideIfEmpty;
    bool Counting;
    bool Completed;

    void UpdateAmount(float DeltaSeconds);
    void SetResource(class UCappedResource* InResource, bool HideIfEmpty);
    void Init Resource();
    void OnChanged(class UCappedResource* Resource, float Amount);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void OnPingAmountFinished();
    void ExecuteUbergraph_HUD_Resources_Team_Icon(int32 EntryPoint);
};

#endif
