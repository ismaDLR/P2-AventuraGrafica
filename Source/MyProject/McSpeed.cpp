#include "McSpeed.h"
#include "Components/ShapeComponent.h"


UMcSpeed::UMcSpeed()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UMcSpeed::TickComponent(float DeltaTime, ELevelTick Tick, FActorComponentTickFunction* func)
{
	Super::TickComponent(DeltaTime, Tick, func);
	//int ran = random();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%i"),ran));
}
float UMcSpeed::UpdateMcSpeed() 
{
	UShapeComponent* shape = Cast<UShapeComponent>(UpdatedComponent);
	shape->SetPhysicsLinearVelocity(FVector(10.0f, 0.0f, 0.0f));
	return shape->GetPhysicsLinearVelocity().X;
}