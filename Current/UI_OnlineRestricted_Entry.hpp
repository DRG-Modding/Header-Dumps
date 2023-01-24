#ifndef UE4SS_SDK_UI_OnlineRestricted_Entry_HPP
#define UE4SS_SDK_UI_OnlineRestricted_Entry_HPP

class UUI_OnlineRestricted_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Image_C* Basic_Image;
    class UBasic_Label_C* Basic_Label;
    EBlueprintablePrivilegeResults PrivilegeResult;
    int32 FontSize;

    void SetFontSize(int32 inFontSize);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_OnlineRestricted_Entry(int32 EntryPoint);
};

#endif
