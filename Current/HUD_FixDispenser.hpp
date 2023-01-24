#ifndef UE4SS_SDK_HUD_FixDispenser_HPP
#define UE4SS_SDK_HUD_FixDispenser_HPP

class UHUD_FixDispenser_C : public UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimDownArrow;
    class UUI_ImageTinted_C* IMG_DownArrow;
    class UImage* Img_Icon;
    class AFSDRefinery* Refinery;
    class UUsableComponentBase* Usable;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_FixDispenser(int32 EntryPoint);
};

#endif
