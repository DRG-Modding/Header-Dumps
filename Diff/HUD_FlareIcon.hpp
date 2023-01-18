#ifndef UE4SS_SDK_HUD_FlareIcon_HPP
#define UE4SS_SDK_HUD_FlareIcon_HPP

class UHUD_FlareIcon_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Ping;
    class UProgressBar* FlareProduction;
    class UInventoryComponent* Inventory;
    int32 Index;
    float LastProgress;

    void SetProgress(float Percent);
    void Init(int32 Index, class UInventoryComponent* Inventory);
    void OnFlareCountChanged(int32 CurrentCount, class UInventoryComponent* Inventory);
    void PreConstruct(bool IsDesignTime);
    void On Flare Production Finished();
    void ExecuteUbergraph_HUD_FlareIcon(int32 EntryPoint);
};

#endif
