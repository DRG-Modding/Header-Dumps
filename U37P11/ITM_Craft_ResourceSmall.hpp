#ifndef UE4SS_SDK_ITM_Craft_ResourceSmall_HPP
#define UE4SS_SDK_ITM_Craft_ResourceSmall_HPP

class UITM_Craft_ResourceSmall_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UTextBlock* DATAAmount;
    class UResourceData* Resource;
    float Amount;

    void Refresh();
    void SetAmount(float InAmount);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Craft_ResourceSmall(int32 EntryPoint);
};

#endif
