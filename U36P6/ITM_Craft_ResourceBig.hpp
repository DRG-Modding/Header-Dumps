#ifndef UE4SS_SDK_ITM_Craft_ResourceBig_HPP
#define UE4SS_SDK_ITM_Craft_ResourceBig_HPP

class UITM_Craft_ResourceBig_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UTextBlock* DATAAmount;
    class UTextBlock* DataName;
    class UResourceData* Resource;
    float Amount;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Craft_ResourceBig(int32 EntryPoint);
};

#endif
