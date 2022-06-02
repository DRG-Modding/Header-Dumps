#ifndef UE4SS_SDK_ITM_LoadoutIconSelector_HPP
#define UE4SS_SDK_ITM_LoadoutIconSelector_HPP

class UITM_LoadoutIconSelector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBorder* Border_1;
    class UUniformGridPanel* IconGrid;
    class UTextBlock* SkinLabel;
    int32 Columns;
    FITM_LoadoutIconSelector_COnIconSelected OnIconSelected;
    void OnIconSelected(class UTexture2D* Texture, int32 ImageIndex);
    TArray<class UTexture2D*> TempIconList;

    void FillGrid();
    void SetData();
    void OnIconClicked(class UTexture2D* Texture, int32 ImageIndex);
    void ExecuteUbergraph_ITM_LoadoutIconSelector(int32 EntryPoint);
    void OnIconSelected__DelegateSignature(class UTexture2D* Texture, int32 ImageIndex);
};

#endif
