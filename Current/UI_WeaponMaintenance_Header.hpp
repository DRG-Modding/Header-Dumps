#ifndef UE4SS_SDK_UI_WeaponMaintenance_Header_HPP
#define UE4SS_SDK_UI_WeaponMaintenance_Header_HPP

class UUI_WeaponMaintenance_Header_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Image_C* GradientImage;
    class UTextBlock* HeaderLabel;
    FText HeaderText;
    int32 Font Size;
    int32 BarThickness;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_WeaponMaintenance_Header(int32 EntryPoint);
};

#endif
