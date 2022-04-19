#ifndef UE4SS_SDK_ITM_Craft_ItemIcon_HPP
#define UE4SS_SDK_ITM_Craft_ItemIcon_HPP

class UITM_Craft_ItemIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* IconReady;
    class UBorder* Border_Outside;
    class UBorder* BorderBG;
    class UImage* ICON_Item;
    class UImage* ICON_Padlock;
    class UImage* Shadow;
    class USizeBox* SizeBox_1;
    TScriptInterface<class ICraftable> Item;
    float Size;
    class UTextureRenderTarget2D* IconRenderTarget;
    class UPlayerCharacterID* characterID;

    void GetBorderColor(FLinearColor& OutputColor);
    void FreeRenderTarget();
    void SetIconTexture(class UObject* Object);
    void GetPlayerState(class AFSDPlayerState*& AsFSDPlayer State);
    void SetData(TScriptInterface<class ICraftable> Item, TSubclassOf<class APlayerCharacter> CharacterClass);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_Craft_ItemIcon(int32 EntryPoint);
};

#endif
