#ifndef UE4SS_SDK_HUD_Crossbow_AmmoCount_Row_HPP
#define UE4SS_SDK_HUD_Crossbow_AmmoCount_Row_HPP

class UHUD_Crossbow_AmmoCount_Row_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* Height_Box;
    class UBasic_Image_C* Icon;
    class USizeBox* Icon_SizeBox;
    class UCanvasPanel* RootCanvas;
    class UBasic_Label_C* Text_Ammo;
    class UUI_AdvancedLabel_C* Text_Reload;
    class UTexture2D* ArrowIcon;
    int32 AmmoCount;
    bool IsActive;

    void SetIsActiveArrow(bool Inactive);
    void SetAmmoCount(int32 InAmmoCount);
    void SetIcon(class UTexture2D* InTexture);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Crossbow_AmmoCount_Row(int32 EntryPoint);
};

#endif
