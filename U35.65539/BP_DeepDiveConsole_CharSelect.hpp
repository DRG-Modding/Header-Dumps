#ifndef UE4SS_SDK_BP_DeepDiveConsole_CharSelect_HPP
#define UE4SS_SDK_BP_DeepDiveConsole_CharSelect_HPP

class ABP_DeepDiveConsole_CharSelect_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh6;
    UStaticMeshComponent* StaticMesh5;
    UStaticMeshComponent* StaticMesh4;
    UStaticMeshComponent* StaticMesh3;
    UStaticMeshComponent* StaticMesh2;
    UStaticMeshComponent* StaticMesh;
    UTextRenderComponent* TextRender;
    UStaticMeshComponent* StaticMesh1;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DeepDiveConsole_CharSelect(int32 EntryPoint);
}

#endif
