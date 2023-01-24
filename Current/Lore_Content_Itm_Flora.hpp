#ifndef UE4SS_SDK_Lore_Content_Itm_Flora_HPP
#define UE4SS_SDK_Lore_Content_Itm_Flora_HPP

class ULore_Content_Itm_Flora_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* FloraImage;
    class USizeBox* SizeBox_17;
    FText Name;
    FText Description;

    class UWidget* GetToolTipWidget_0();
    void SetData(FText Name, FText Description, class UTexture2D* Texture, FGuid ObjectID);
    void ExecuteUbergraph_Lore_Content_Itm_Flora(int32 EntryPoint);
};

#endif
