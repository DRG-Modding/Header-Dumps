#ifndef UE4SS_SDK_UI_Forge_SchematicIconBG_HPP
#define UE4SS_SDK_UI_Forge_SchematicIconBG_HPP

class UUI_Forge_SchematicIconBG_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_Outside;
    class UBorder* BorderBG;
    class UImage* Shadow;
    class USizeBox* SizeBox_0;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Forge_SchematicIconBG(int32 EntryPoint);
};

#endif
