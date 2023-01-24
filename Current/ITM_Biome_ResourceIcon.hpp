#ifndef UE4SS_SDK_ITM_Biome_ResourceIcon_HPP
#define UE4SS_SDK_ITM_Biome_ResourceIcon_HPP

class UITM_Biome_ResourceIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UTextBlock* DATA_Amount;
    class UTextBlock* DATA_ResourceName;

    void SetData(class UResourceData* Resource, bool IsScarce);
    void ExecuteUbergraph_ITM_Biome_ResourceIcon(int32 EntryPoint);
};

#endif
