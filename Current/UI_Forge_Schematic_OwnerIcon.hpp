#ifndef UE4SS_SDK_UI_Forge_Schematic_OwnerIcon_HPP
#define UE4SS_SDK_UI_Forge_Schematic_OwnerIcon_HPP

class UUI_Forge_Schematic_OwnerIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* IconFiller;
    class UImage* IconOutline;
    class USizeBox* MaxSizer;
    class UCanvasPanel* RootCanvas;
    int32 MaxWidth;
    int32 MaxHeight;
    class USchematic* Schematic;

    void FromActorClass(class UItemData* ItemData);
    void FromItemID(class UItemID* ItemID);
    void SetIconAndVisibility(class UTexture2D* Texture, FLinearColor InColor);
    void FromSchematic(class USchematic* InSchematic);
    void SetMaxSize(int32 InWidth, int32 InHeight);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon(int32 EntryPoint);
};

#endif
