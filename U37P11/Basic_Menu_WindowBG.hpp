#ifndef UE4SS_SDK_Basic_Menu_WindowBG_HPP
#define UE4SS_SDK_Basic_Menu_WindowBG_HPP

class UBasic_Menu_WindowBG_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* ColorBar;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_Menu_WindowBG(int32 EntryPoint);
};

#endif
