#ifndef UE4SS_SDK_HUD_BoscoAbillityIcon_HPP
#define UE4SS_SDK_HUD_BoscoAbillityIcon_HPP

class UHUD_BoscoAbillityIcon_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Ping;
    class UImage* Border;
    class UProgressBar* FlareProduction;
    class UInventoryComponent* Inventory;
    int32 Index;
    float LastProgress;
    class UBoscoAbillityComponent* Abillity;
    FLinearColor FilledColor;
    FLinearColor UnFilledColor;
    float PreviewProgress;

    void SetProgress(float Percent, bool DisableAnim);
    void Init(int32 Index, class UBoscoAbillityComponent* Abillity);
    void PreConstruct(bool IsDesignTime);
    void On Flare Production Finished();
    void OnChargeUsed(int32 aCurrentCharges);
    void ExecuteUbergraph_HUD_BoscoAbillityIcon(int32 EntryPoint);
};

#endif
