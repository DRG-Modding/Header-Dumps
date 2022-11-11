#ifndef UE4SS_SDK_Cheat_MaterialInfo_HPP
#define UE4SS_SDK_Cheat_MaterialInfo_HPP

class UCheat_MaterialInfo_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_Material;
    class UTerrainMaterial* Material;

    void Construct();
    void ExecuteUbergraph_Cheat_MaterialInfo(int32 EntryPoint);
};

#endif
