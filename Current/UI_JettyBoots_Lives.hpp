#ifndef UE4SS_SDK_UI_JettyBoots_Lives_HPP
#define UE4SS_SDK_UI_JettyBoots_Lives_HPP

class UUI_JettyBoots_Lives_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* IconBox;
    TEnumAsByte<ENUM_MenuColors::Type> IconColor;
    int32 IconHeight;
    int32 IconAngle;
    int32 IconSpacing;
    int32 Lives;

    void SetLives(int32 InLives);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_JettyBoots_Lives(int32 EntryPoint);
};

#endif
