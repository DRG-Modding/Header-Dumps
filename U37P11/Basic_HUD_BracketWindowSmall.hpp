#ifndef UE4SS_SDK_Basic_HUD_BracketWindowSmall_HPP
#define UE4SS_SDK_Basic_HUD_BracketWindowSmall_HPP

class UBasic_HUD_BracketWindowSmall_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* bgL;
    class UBorder* bgM;
    class UImage* bgR;
    class UImage* edgeL;
    class UImage* edgeR;
    class UNamedSlot* PutStuffHere;

    void SetEdgeColor(TEnumAsByte<ENUM_MenuColors::Type> Input);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_HUD_BracketWindowSmall(int32 EntryPoint);
};

#endif
