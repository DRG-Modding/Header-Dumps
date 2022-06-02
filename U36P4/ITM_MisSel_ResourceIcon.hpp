#ifndef UE4SS_SDK_ITM_MisSel_ResourceIcon_HPP
#define UE4SS_SDK_ITM_MisSel_ResourceIcon_HPP

class UITM_MisSel_ResourceIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UTextBlock* DATA_ResourceName;

    void SetData(class UResourceData* Resource);
    void ExecuteUbergraph_ITM_MisSel_ResourceIcon(int32 EntryPoint);
};

#endif
